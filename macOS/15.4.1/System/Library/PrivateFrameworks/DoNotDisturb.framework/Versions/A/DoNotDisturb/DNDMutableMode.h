@class NSUUID, NSString, DNDModeSymbolDescriptor;

@interface DNDMutableMode : DNDMode

@property (copy) NSUUID *identifier;
@property (copy) NSString *symbolImageName;
@property (copy) NSString *tintColorName;
@property (copy) DNDModeSymbolDescriptor *symbolDescriptor;
@property (copy) NSString *name;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setName:(id)a0;
- (void)setIdentifier:(id)a0;
- (void)setSymbolImageName:(id)a0;
- (void)setSymbolDescriptor:(id)a0;
- (void)setTintColorName:(id)a0;

@end
