@class AVAsset, NSImage, RCPEventStream, NSObject;
@protocol OS_dispatch_queue;

@interface RCPMovie : NSObject {
    NSObject<OS_dispatch_queue> *_serializationQueue;
}

@property (retain, nonatomic) RCPEventStream *eventStream;
@property (retain, nonatomic) AVAsset *screenRecording;
@property (retain, nonatomic) NSImage *screenshot;
@property (nonatomic) long long interfaceOrientation;
@property (readonly, nonatomic) unsigned long long startTimestamp;
@property (readonly, nonatomic) unsigned long long endTimestamp;

- (void).cxx_destruct;
- (id)initWithContentsOfURL:(id)a0;

@end
