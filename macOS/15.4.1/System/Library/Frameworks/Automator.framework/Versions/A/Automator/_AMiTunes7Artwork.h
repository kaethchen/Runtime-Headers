@class NSImage, NSNumber;

@interface _AMiTunes7Artwork : _AMiTunes7Item

@property (copy) NSImage *data;
@property (readonly) BOOL downloaded;
@property (readonly, copy) NSNumber *format;
@property long long kind;

@end
