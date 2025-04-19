@interface BRDocObjectID : BRFileObjectID {
    unsigned int _docID;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)type;
- (id)asString;
- (id)documentID;
- (id)initWithDocID:(unsigned int)a0;
- (id)initWithDocIDNumber:(id)a0;
- (BOOL)isDocumentID;
- (BOOL)isFpfsItem;
- (unsigned long long)rawID;

@end
