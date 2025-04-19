@class ABGroup, NSDictionary;

@interface ABImportedGroupInfo : NSObject

@property (retain) ABGroup *group;
@property (retain) NSDictionary *cardRep;

- (void)dealloc;

@end
