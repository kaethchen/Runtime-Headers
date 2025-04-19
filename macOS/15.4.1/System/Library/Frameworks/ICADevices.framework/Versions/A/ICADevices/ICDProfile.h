@class NSString;

@interface ICDProfile : NSObject <NSCopying> {
    struct { unsigned int size; int cmmId; unsigned int version; int deviceClass; int colorSpace; int pcs; struct { unsigned short year; unsigned short month; unsigned short day; unsigned short hours; unsigned short minutes; unsigned short seconds; } date; int magic; int platform; unsigned int flags; int manufacturer; unsigned int model; unsigned int attributes[2]; unsigned int renderingIntent; struct { int X; int Y; int Z; } illuminant; int creator; char reserved[44]; } _header;
    NSString *_name;
    struct ColorSyncProfile { } *_ref;
}

+ (id)profileWithRef:(struct ColorSyncProfile { } *)a0;
+ (id)profileWithData:(id)a0;
+ (id)profileWithPath:(id)a0;
+ (id)profileWithSource:(id)a0 andAbstract:(id)a1;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithData:(id)a0;
- (id)initWithPath:(id)a0;
- (struct ColorSyncProfile { } *)profRef;
- (id)initWithRef:(struct ColorSyncProfile { } *)a0;

@end
