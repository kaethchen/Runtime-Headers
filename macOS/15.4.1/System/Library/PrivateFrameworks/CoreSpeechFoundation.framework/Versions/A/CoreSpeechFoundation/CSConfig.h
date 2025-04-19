@interface CSConfig : NSObject

+ (unsigned int)audioConverterBitrate;
+ (unsigned long long)channelForOutputReference;
+ (unsigned long long)channelForProcessedInput;
+ (unsigned long long)channelForVoiceIsolation;
+ (float)daysBeforeRemovingLogFiles;
+ (double)defaultContinuousFingerprintBufferDuration;
+ (unsigned long long)exclaveRecordingNumSamples;
+ (unsigned int)hearstNumberOfBytesPerChunk;
+ (unsigned int)hearstNumberOfSamplesPerChunk;
+ (double)inputRecordingBufferDuration;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (float)inputRecordingDurationInSecs;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (BOOL)inputRecordingIsFloat;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (float)inputRecordingSampleRate;
+ (float)inputRecordingSampleRateNarrowBand;
+ (float)remoteVADDuration;
+ (unsigned int)EncryptionAudioSampleByteDepth;
+ (unsigned long long)zeroFilterWindowSizeInMsForReport;
+ (double)defaultContinuousFingerprintBufferDurationForRemora;
+ (unsigned long long)exclaveHALInputNumChannelsWithDSP;
+ (unsigned long long)exclaveHALInputNumChannelsWithoutDSP;
+ (unsigned long long)exclaveRecordingNumChannels;
+ (float)inputRecordingDurationInSecsExtended;
+ (long long)inputRecordingEncoderAudioQuality;
+ (id)inputRecordingSampleRateConverterAlgorithm;
+ (unsigned long long)serverLoggingChannelBitset;
+ (float)zeroFilterApproxAbsSpeechThreshold;
+ (unsigned long long)zeroFilterCSLoggingHeartBeatThresholdInMS;
+ (unsigned long long)zeroFilterWindowSizeInMs;
+ (unsigned long long)zeroFilterWindowSizeInMsForCSLogging;

@end
