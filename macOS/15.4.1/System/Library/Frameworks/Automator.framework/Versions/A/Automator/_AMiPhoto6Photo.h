@class NSString, NSArray, NSDate;

@interface _AMiPhoto6Photo : _AMiPhoto6Item

@property (copy) NSString *comment;
@property (copy) NSDate *date;
@property (readonly, copy) NSArray *dimensions;
@property (readonly) long long height;
@property (readonly, copy) NSString *imageFilename;
@property (readonly, copy) NSString *imagePath;
@property (copy) NSString *name;
@property (readonly, copy) NSString *thumbnailFilename;
@property (readonly, copy) NSString *thumbnailPath;
@property (copy) NSString *title;
@property (readonly) long long width;

- (id)keywords;
- (long long)id;

@end
