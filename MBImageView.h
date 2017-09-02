/* MBImageView */

/* #import <Cocoa/Cocoa.h> */
#import <AppKit/AppKit.h>

@interface MBImageView : NSImageView
{
    IBOutlet id aqua;
	NSImage *subimage;
	NSPoint cursor;
	BOOL drawCursor;
}

- (void)setSubimage:(NSImage *)image;
- (void)drawCursor:(BOOL)flag;
- (void)setTransparency:(int)trans;

@end
