@class NSArray, NSString, NSMutableArray;

@interface _MFMessageCollector : NSObject <MFMessageConsumer, MFQueryProgressMonitor> {
    NSMutableArray *_messages;
}

@property (nonatomic) BOOL didCancel;
@property (readonly, copy, nonatomic) NSArray *messages;
@property (readonly) BOOL shouldCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
