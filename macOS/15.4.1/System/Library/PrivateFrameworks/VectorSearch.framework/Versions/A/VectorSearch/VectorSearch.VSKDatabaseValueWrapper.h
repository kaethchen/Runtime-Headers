@interface VectorSearch.VSKDatabaseValueWrapper : NSObject {
    void /* unknown type, empty encoding */ wrappedValue;
}

- (id)init;
- (void).cxx_destruct;
- (id)initWithStringValue:(id)a0;
- (id)initWithIntegerValue:(id)a0;
- (id)initWithDoubleValue:(id)a0;
- (id)initWithDataValue:(id)a0;
- (id)initWithTokenizedStringValues:(id)a0;

@end
