@class NSArray, NSString;

@interface _AMiPhoto6Album : _AMiPhoto6Item

@property (readonly, copy) NSArray *children;
@property (copy) NSString *name;
@property (readonly, copy) _AMiPhoto6Album *parent;
@property (readonly) int type;
@property (readonly, copy) NSString *url;

- (id)keywords;
- (id)photos;
- (long long)id;

@end
