@class ECSubject;

@interface _MFMessageSortingValueSubject : MFMessageSortingValue

@property (copy, nonatomic) ECSubject *subject;

- (void)dealloc;
- (id)description;

@end
