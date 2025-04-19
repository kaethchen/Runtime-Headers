@class NSURL;

@interface AFObjectCreatedSiriResponse : AFSiriResponse {
    NSURL *_objectIdentifier;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithRequest:(id)a0 objectIdentifier:(id)a1;
- (id)_objectIdentifier;

@end
