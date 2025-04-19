@class NSString, MTLFunctionConstantValues;

@interface MPSUserDAGVisibleOperation : NSObject

@property (readonly, nonatomic) NSString *visibleName;
@property (readonly, nonatomic) NSString *specializedName;
@property (readonly, nonatomic) MTLFunctionConstantValues *functionConstants;

- (void)dealloc;
- (id)getVisibleFunction:(id)a0;
- (id)initWithVisibleName:(id)a0 specializedName:(id)a1 functionConstants:(id)a2;

@end
