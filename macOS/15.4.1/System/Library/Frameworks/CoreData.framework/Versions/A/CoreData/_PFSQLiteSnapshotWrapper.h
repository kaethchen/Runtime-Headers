@interface _PFSQLiteSnapshotWrapper : NSObject <NSCopying, NSMutableCopying> {
    struct sqlite3_snapshot { unsigned char x0[48]; } *_s;
    int _externalReferences;
    int _flags;
}

@property (readonly, nonatomic) const void *bytes;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopy;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (long long)compare:(id)a0;

@end
