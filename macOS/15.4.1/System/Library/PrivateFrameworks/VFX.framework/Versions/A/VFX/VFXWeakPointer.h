@interface VFXWeakPointer : NSObject

@property (weak, nonatomic) id weakRef;

- (void).cxx_destruct;
- (id)copyWeakRef;

@end
