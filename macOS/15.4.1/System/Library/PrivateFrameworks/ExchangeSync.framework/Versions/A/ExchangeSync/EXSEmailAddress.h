@class NSString, EXSItemIDType;

@interface EXSEmailAddress : NSObject

@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *routingType;
@property (nonatomic) long long mailboxType;
@property (retain, nonatomic) EXSItemIDType *itemID;

+ (id)initWithPropertiesDictionary:(id)a0;

- (void).cxx_destruct;
- (id)deriveJSONrepresentation;

@end
