@class NSDictionary;

@interface _ATXCategoricalHistogram : NSObject <NSSecureCoding> {
    unsigned int _count;
    unsigned int _capacity;
    struct { double x0; unsigned int x1; unsigned int x2; } *_entries;
    NSDictionary *_lastDates;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)enumerate:(id /* block */)a0;
- (id)getLastDatesByCategoryId;

@end
