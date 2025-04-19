@interface VMUArchitecture : NSObject <NSCoding, NSCopying> {
    int _cpuType;
    int _cpuSubtype;
}

+ (void)initialize;
+ (id)anyArchitecture;
+ (id)ppcArchitecture;
+ (id)armArchitecture;
+ (id)architectureWithCpuType:(int)a0 cpuSubtype:(int)a1;
+ (id)currentArchitecture;
+ (id)i386Architecture;
+ (id)ppc32Architecture;
+ (id)ppc64Architecture;
+ (id)x86_32Architecture;
+ (id)x86_64Architecture;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (int)cpuType;
- (int)cpuSubtype;
- (BOOL)isBigEndian;
- (BOOL)is64Bit;
- (BOOL)is32Bit;
- (id)initWithCpuType:(int)a0 cpuSubtype:(int)a1;
- (BOOL)isEqualToArchitecture:(id)a0;
- (BOOL)isLittleEndian;
- (BOOL)matchesArchitecture:(id)a0;

@end
