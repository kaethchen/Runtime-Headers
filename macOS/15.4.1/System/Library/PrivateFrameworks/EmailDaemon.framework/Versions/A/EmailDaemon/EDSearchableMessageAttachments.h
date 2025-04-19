@class CSCustomAttributeKey;

@interface EDSearchableMessageAttachments : NSObject {
    void /* unknown type, empty encoding */ _underlying;
}

@property (class, nonatomic, readonly) CSCustomAttributeKey *specificUTIsAttribute;

- (id)init;
- (void).cxx_destruct;
- (void)addToAttributes:(id)a0;
- (id)initWithNames:(id)a0 paths:(id)a1 UTIs:(id)a2 specificUTIs:(id)a3 mimeTypes:(id)a4 kinds:(id)a5;

@end
