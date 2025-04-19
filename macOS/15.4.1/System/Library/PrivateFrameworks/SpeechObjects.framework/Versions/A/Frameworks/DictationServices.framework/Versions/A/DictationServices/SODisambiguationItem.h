@class NSString;

@interface SODisambiguationItem : NSObject

@property (retain) NSString *titleText;
@property (retain) NSString *descriptionText;
@property (retain) id object;
@property (retain) id target;
@property SEL action;

@end
