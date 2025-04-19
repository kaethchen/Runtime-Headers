@class NSString;

@interface EspressoDataFrameMappedFile : NSObject {
    int file_id;
    unsigned long long length;
}

@property (retain) NSString *path;
@property char *basePtr;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithPath:(id)a0;

@end
