@interface BRDbRowObjectID : BRFileObjectID {
    unsigned long long _rowId;
    unsigned char _type;
}

+ (BOOL)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned char)type;
- (id)asString;
- (id)documentID;
- (id)folderID;
- (id)initWithRowID:(unsigned long long)a0 type:(unsigned char)a1;
- (id)itemDBRowID;
- (unsigned long long)rawID;

@end
