@class NSData, NSURL;

@interface NSMovie : NSObject <NSCoding> {
    NSData *_data;
    NSURL *_URL;
}

- (void)dealloc;
- (id)init;
- (id)URL;
- (id)data;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)QTMovie;
- (id)initWithMovie:(id)a0;

@end
