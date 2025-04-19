@class NSUUID, NSString;

@interface TSPDocumentRevision : NSObject <NSCopying>

@property (readonly, nonatomic) int sequence;
@property (readonly, nonatomic) NSUUID *identifier;
@property (readonly, nonatomic) NSString *revisionString;

+ (id)documentRevisionAtURL:(id)a0 passphrase:(id)a1 error:(id *)a2;
+ (id)revisionWithRevisionString:(id)a0;
+ (id)revisionWithSequence:(int)a0 identifier:(id)a1;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSequence:(int)a0 identifier:(id)a1;
- (long long)compareSequenceFromRevision:(id)a0;
- (id)initWithRevisionString:(id)a0;
- (id)nextRevisionWithIdentifier:(id)a0;

@end
