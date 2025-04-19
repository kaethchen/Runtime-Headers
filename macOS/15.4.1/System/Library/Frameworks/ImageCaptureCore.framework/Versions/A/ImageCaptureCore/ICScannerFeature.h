@class NSString;

@interface ICScannerFeature : NSObject {
    id _sfProps;
}

@property (readonly) unsigned long long type;
@property (readonly) NSString *internalName;
@property (readonly) NSString *humanReadableName;
@property (readonly) NSString *tooltip;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (void)setType:(unsigned long long)a0;
- (void)setInternalName:(id)a0;
- (void)setHumanReadableName:(id)a0;
- (void)setTooltip:(id)a0;
- (id)oldAndNewSettings:(id)a0;

@end
