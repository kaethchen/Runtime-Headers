@interface NSPathStore2 : NSString {
    unsigned int _lengthAndRefCount;
    unsigned short _characters[0];
}

+ (id)pathStoreWithCharacters:(const unsigned short *)a0 length:(unsigned long long)a1;
+ (id)pathWithComponents:(id)a0;

- (id)copy;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (unsigned long long)length;
- (id)stringByResolvingSymlinksInPath;
- (id)stringByAppendingPathComponent:(id)a0;
- (const unsigned short *)_fastCharacterContents;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (void)getCharacters:(unsigned short *)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (BOOL)isEqualToString:(id)a0;
- (id)lastPathComponent;
- (id)pathExtension;
- (id)stringByDeletingLastPathComponent;
- (id)stringByStandardizingPath;
- (id)stringByAppendingPathExtension:(id)a0;
- (id)pathComponents;
- (id)stringByDeletingPathExtension;
- (id)stringByExpandingTildeInPath;
- (id)_stringByResolvingSymlinksInPathUsingCache:(BOOL)a0;
- (id)_stringByStandardizingPathUsingCache:(BOOL)a0;
- (BOOL)isAbsolutePath;
- (id)stringByAbbreviatingWithTildeInPath;

@end
