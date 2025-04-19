@class NSString;

@interface PLPhotosKnowledgeGraphAvailabilityStatus : NSObject

@property (readonly, copy, nonatomic) NSString *statusDescription;
@property (readonly, nonatomic) long long availability;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
