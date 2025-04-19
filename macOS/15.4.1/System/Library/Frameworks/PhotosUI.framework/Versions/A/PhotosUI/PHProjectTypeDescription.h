@class NSImage, NSSet, NSDictionary, NSArray, NSDate, NSString, NSAttributedString;

@interface PHProjectTypeDescription : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) NSSet *whitelistedAttributedStringKeys;
@property (class, readonly, nonatomic) NSDictionary *attributeFixupBlocks;
@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSDate *decodeDate;
@property (copy, nonatomic, setter=_setSubtypeDescriptions:) NSArray *subtypeDescriptions;
@property (readonly, copy, nonatomic) NSString *projectType;
@property (readonly, copy, nonatomic) NSString *localizedTitle;
@property (readonly, copy, nonatomic) NSString *localizedDescription;
@property (readonly, copy, nonatomic) NSAttributedString *localizedAttributedDescription;
@property (readonly, copy, nonatomic) NSImage *image;
@property (readonly, nonatomic) BOOL canProvideSubtypes;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithProjectType:(id)a0 title:(id)a1 description:(id)a2 image:(id)a3 canProvideSubtypes:(BOOL)a4;
- (void)_configureWithProjectType:(id)a0 title:(id)a1 description:(id)a2 attributedDescription:(id)a3 image:(id)a4 subtypeDescriptions:(id)a5 willProvideSubtypeDescription:(BOOL)a6;
- (id)initWithProjectType:(id)a0 title:(id)a1 attributedDescription:(id)a2 image:(id)a3 canProvideSubtypes:(BOOL)a4;
- (id)initWithProjectType:(id)a0 title:(id)a1 attributedDescription:(id)a2 image:(id)a3 subtypeDescriptions:(id)a4;
- (id)initWithProjectType:(id)a0 title:(id)a1 description:(id)a2 image:(id)a3;
- (id)initWithProjectType:(id)a0 title:(id)a1 description:(id)a2 image:(id)a3 subtypeDescriptions:(id)a4;

@end
