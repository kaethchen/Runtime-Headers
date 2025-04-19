@class NSURL;

@interface VZSharedDirectory : NSObject {
    unsigned long long _uniqueID;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=isReadOnly) BOOL readOnly;

- (void).cxx_destruct;
- (id)initWithURL:(id)a0 readOnly:(BOOL)a1;

@end
