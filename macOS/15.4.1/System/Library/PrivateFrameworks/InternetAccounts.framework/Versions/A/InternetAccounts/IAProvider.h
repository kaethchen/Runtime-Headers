@class NSString, NSMutableArray;

@interface IAProvider : NSObject

@property (retain, nonatomic) NSMutableArray *serviceTypesProvided;
@property (readonly) NSString *providerType;

+ (id)dataProviderIDs;
+ (id)aListProviderIDs;
+ (BOOL)providerTypeIsAList:(id)a0;

- (id)description;
- (void).cxx_destruct;
- (id)initWithProviderType:(id)a0;

@end
