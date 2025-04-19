@class CBCentral, NSData, NSObject, NSError;
@protocol OS_dispatch_semaphore;

@interface SMBTWriteRequest : NSObject

@property (retain) CBCentral *central;
@property (retain) NSData *data;
@property unsigned long long dataOffset;
@property unsigned long long numberOfAttempts;
@property (retain) NSObject<OS_dispatch_semaphore> *completionSemaphore;
@property (retain) NSError *error;

- (void).cxx_destruct;

@end
