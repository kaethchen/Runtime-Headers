@class NSString, NSPredicate;

@interface ABPeoplePickerProperty : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *property;
@property (retain, nonatomic) NSString *key;
@property (retain, nonatomic) NSPredicate *filter;

- (id)description;
- (void).cxx_destruct;

@end
