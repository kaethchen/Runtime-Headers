@class NSString;

@interface CNMutableInstantMessageAddress : CNInstantMessageAddress

@property (copy) NSString *username;
@property (copy) NSString *service;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)freeze;

@end
