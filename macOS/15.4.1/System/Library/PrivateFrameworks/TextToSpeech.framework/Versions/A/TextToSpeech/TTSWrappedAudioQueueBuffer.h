@interface TTSWrappedAudioQueueBuffer : NSObject

@property (nonatomic) struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *aqBuffer;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (nonatomic) struct AudioTimeStamp { double mSampleTime; unsigned long long mHostTime; double mRateScalar; unsigned long long mWordClockTime; struct SMPTETime { short mSubframes; short mSubframeDivisor; unsigned int mCounter; unsigned int mType; unsigned int mFlags; short mHours; short mMinutes; short mSeconds; short mFrames; } mSMPTETime; unsigned int mFlags; unsigned int mReserved; } queuedTimeStamp;
@property (readonly, nonatomic) unsigned long long byteSize;

- (void).cxx_destruct;

@end
