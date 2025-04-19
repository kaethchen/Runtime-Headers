@class NSString, NSURL, NSData, NSNumber;

@interface XMFile : NSObject

@property (readonly) NSString *path;
@property (retain) NSURL *localPath;
@property (readonly) NSString *owner;
@property (readonly) NSString *compression;
@property (readonly) NSNumber *length;
@property (readonly) NSNumber *mode;
@property (readonly) NSData *iconData;
@property (readonly) BOOL endOfFile;
@property (retain) NSString *rawPath;
@property (readonly) BOOL isDirectory;

+ (id)endOfFile;

- (id)description;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;
- (id)_initEOF;
- (id)_numberForOctalString:(id)a0;

@end
