@class NSString;

@interface ICScannerFeatureProps : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *internalName;
@property (copy, nonatomic) NSString *humanReadableName;
@property (copy, nonatomic) NSString *tooltip;

- (void).cxx_destruct;

@end
