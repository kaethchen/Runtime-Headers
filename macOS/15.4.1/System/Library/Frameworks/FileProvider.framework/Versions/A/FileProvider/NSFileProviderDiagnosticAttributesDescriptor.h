@class NSString, NSDictionary, NSError;

@interface NSFileProviderDiagnosticAttributesDescriptor : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int docID;
@property (readonly, nonatomic) unsigned long long fileID;
@property (readonly, nonatomic) NSString *itemID;
@property (retain, nonatomic) NSDictionary *diagnosticAttributes;
@property (retain, nonatomic) NSError *error;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithFileID:(unsigned long long)a0;
- (id)initWithItemID:(id)a0;
- (id)initWithDocID:(unsigned int)a0;

@end
