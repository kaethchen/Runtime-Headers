@class NSString;

@interface _AMiCalAttendee : _AMiCalItem

@property (readonly, copy) NSString *displayName;
@property (readonly, copy) NSString *email;
@property int participationStatus;

@end
