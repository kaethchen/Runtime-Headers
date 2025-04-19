@interface BWMetadataFormat : BWFormat {
    struct opaqueCMFormatDescription { } *_desc;
}

+ (void)initialize;
+ (id)formatWithMetadataFormatDescription:(struct opaqueCMFormatDescription { } *)a0;

- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (unsigned int)mediaType;
- (struct opaqueCMFormatDescription { } *)formatDescription;

@end
