@class NSString;

@interface DESpeakableString : NSObject

@property void *This;
@property (retain) NSString *print;
@property (retain) NSString *speak;

- (void)dealloc;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (id)initWithPrint:(id)a0 speak:(id)a1;

@end
