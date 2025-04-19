@interface PTRowAction : NSObject <NSSecureCoding> {
    id /* block */ _handler;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL isEncodable;
@property (readonly, nonatomic) id /* block */ handler;

+ (id)actionWithHandler:(id /* block */)a0;

- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id /* block */)defaultHandler;
- (BOOL)deselectsRowOnSuccess;

@end
