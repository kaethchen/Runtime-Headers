@class NSString;

@interface MCFileTypeInfo : NSObject

@property (copy, nonatomic) NSString *mimeType;
@property (copy, nonatomic) NSString *pathExtension;
@property (nonatomic) unsigned int osType;
@property (readonly, copy, nonatomic) NSString *typeIdentifier;

- (id)description;
- (void).cxx_destruct;
- (void)getTypeIdentifier:(id *)a0 withLargestPedigree:(id *)a1;
- (BOOL)getTypeInfoForDesiredFields:(unsigned long long)a0;
- (void)_getTypeInfoFromFallbackFields:(unsigned long long *)a0;
- (void)_getTypeInfoBasedOnFields:(unsigned long long *)a0 inputClass:(struct __CFString { } *)a1 inputValue:(struct __CFString { } *)a2;

@end
