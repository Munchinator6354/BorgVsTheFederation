/*
 * File: gsound.h
 * --------------
 * This file defines a class that represents a sound.
 *
 * @version 2021/04/09
 * - added sgl namespace
 * @version 2021/04/03
 * - removed dependencies
 * - renamed to GSound
 * @version 2018/10/23
 * - reimplemented in C++ using QSound class
 * @version 2018/09/25
 * - added doc comments for new documentation generation
 */


#ifndef _gsound_h
#define _gsound_h

#include <string>
#include <QMediaPlayer>

namespace sgl {

/**
 * This class encapsulates a sound file.
 * The sound file is specified in the constructor and must be a file in either
 * the current directory or a subdirectory named <code>sounds</code>.
 *
 * The following code, for example, plays the sound file
 * <code>ringtone.wav</code>:
 *
 *<pre>
 *    GSound ringtone("ringtone.wav");
 *    ringtone.play();
 *</pre>
 *
 * You can also use the static <code>playSound</code> method:
 *
 *<pre>
 *    GSound::playSound("ringtone.wav");
 *</pre>
 */
class GSound {
public:
    /**
     * Returns the duration of the sound clip that is currently playing.
     * If no clip is playing, returns 0.
     */
    static long getDuration();

    /**
     * Returns the overall audio volume from 0 (silence) to 100 (full volume).
     * The default volume is 100.
     */
    static int getVolume();

    /**
     * Pauses playing the sound, if it is playing.
     * If paused, calling play() again will unpause.
     */
    static void pause();

    /**
     * Starts playing the sound if not playing, or unpauses if paused.
     * This call returns immediately without waiting for the sound to finish.
     */
    static void playSound(const std::string& filename);

    /**
     * Sets the overall audio volume from 0 (silence) to 100 (full volume).
     * The default volume is 100.
     */
    static void setVolume(int volume);

    /**
     * Stops playing the sound, if it is playing.
     */
    static void stop();


    // begin old object-oriented interface (kept for backward compatibility)

    /**
     * Creates a <code>Sound</code> object by reading in the contents of the
     * specified file or URL.
     */
    GSound(const std::string& filename);

    /**
     * Frees the memory associated with the sound.
     */
    virtual ~GSound();

    /**
     * Starts playing the sound.
     * This call returns immediately without waiting for the sound to finish.
     */
    void play();

private:
    static QMediaPlayer* _qmediaPlayer;

    static void initialize();

    std::string _filename;
};

} // namespace sgl

#endif // _gsound_h
