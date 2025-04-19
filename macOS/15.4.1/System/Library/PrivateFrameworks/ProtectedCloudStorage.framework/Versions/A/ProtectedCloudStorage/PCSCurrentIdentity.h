@class NSDate;

@interface PCSCurrentIdentity : NSObject

@property (retain) NSDate *currentItemPointerModificationTime;
@property (readonly) struct _PCSIdentityData { } *identity;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithIdentity:(struct _PCSIdentityData { } *)a0 currentItemPointerModificationTime:(id)a1;

@end
