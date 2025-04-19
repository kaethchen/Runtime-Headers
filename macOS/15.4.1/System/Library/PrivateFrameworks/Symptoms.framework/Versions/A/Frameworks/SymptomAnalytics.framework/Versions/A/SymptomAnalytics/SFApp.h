@class NSSet;

@interface SFApp : Process

@property (retain, nonatomic) NSSet *hasAppExperience;
@property (retain, nonatomic) NSSet *hasAppEndpoint;

+ (id)entityName;
+ (id)fetchRequest;

- (BOOL)isApp;

@end
