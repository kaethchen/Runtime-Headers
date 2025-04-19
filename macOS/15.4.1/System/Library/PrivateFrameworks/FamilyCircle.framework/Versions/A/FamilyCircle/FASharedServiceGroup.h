@class NSString, NSNumber, NSArray;

@interface FASharedServiceGroup : NSObject

@property (retain, nonatomic) NSString *headerText;
@property (retain, nonatomic) NSString *footerText;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSArray *services;

- (id)description;
- (void).cxx_destruct;
- (id)initWithServerResponse:(id)a0;

@end
