@class NSString, NSArray;

@interface PHProjectInfo : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) long long creationSource;
@property (readonly, nonatomic) NSString *projectType;
@property (readonly, nonatomic) NSArray *sections;
@property (readonly, nonatomic) BOOL brandingEnabled;
@property (readonly, nonatomic) BOOL pageNumbersEnabled;
@property (readonly, nonatomic) NSString *productIdentifier;
@property (readonly, nonatomic) NSString *themeIdentifier;

- (id)debugDescription;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description:(BOOL)a0;
- (id)initWithProjectType:(id)a0 sections:(id)a1 creationSource:(long long)a2;
- (id)initWithProjectType:(id)a0 sections:(id)a1 creationSource:(long long)a2 brandingEnabled:(BOOL)a3 pageNumbersEnabled:(BOOL)a4 productIdentifier:(id)a5 themeIdentifier:(id)a6;

@end
