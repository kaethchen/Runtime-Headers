@class NSData, NSString;

@interface CodeRequirement : NSObject {
    NSData *_data;
    NSString *_text;
}

@property (readonly) struct __SecRequirement { } *requirementRef;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)data;
- (id)initWithData:(id)a0;
- (id)stringValue;
- (BOOL)validateCode:(id)a0 flags:(unsigned int)a1 error:(id *)a2;
- (id)initWithSecRequirementRef:(struct __SecRequirement { } *)a0;
- (id)initWithText:(id)a0 error:(id *)a1;

@end
