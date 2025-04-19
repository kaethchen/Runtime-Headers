@class NSString, NSColor;

@interface _AMiCalCalendar : _AMiCalItem

@property (copy) NSString *name;
@property (copy) NSColor *color;
@property (readonly, copy) NSString *uid;
@property (readonly) BOOL writable;
@property (copy) NSString *objectDescription;

- (id)events;
- (id)todos;

@end
