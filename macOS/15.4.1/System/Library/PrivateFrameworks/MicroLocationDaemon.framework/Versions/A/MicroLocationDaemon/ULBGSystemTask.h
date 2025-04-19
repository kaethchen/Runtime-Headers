@class NSString;

@interface ULBGSystemTask : NSObject <ULBGSystemTask>

@property (nonatomic) BOOL shouldCancel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithUnderlyingTask:(id)a0;

@end
