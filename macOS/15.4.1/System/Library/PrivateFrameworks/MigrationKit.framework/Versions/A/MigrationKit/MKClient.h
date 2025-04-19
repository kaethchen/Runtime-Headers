@class NSString, NSArray;

@interface MKClient : NSObject

@property (copy, nonatomic) NSString *hostname;
@property (copy, nonatomic) NSString *brand;
@property (copy, nonatomic) NSString *model;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *os;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *locale;
@property (retain, nonatomic) NSArray *inputMethodLanguages;
@property (nonatomic) unsigned long long activatedCellularPlans;

- (void).cxx_destruct;
- (id)initWithHostname:(id)a0 brand:(id)a1 model:(id)a2 name:(id)a3 os:(id)a4 version:(id)a5 locale:(id)a6 inputMethodLanguages:(id)a7 activatedCellularPlans:(unsigned long long)a8;

@end
