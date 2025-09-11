#if false
/*
 PFM::C++ For Musicians Task
 Project 1 - Part 1 / 1
 Video: Chapter 2 Part 1
 
Create a branch named Part1

Purpose:  This project will get you thinking correctly about choosing good names for the tasks that your objects will perform. 
This project will also introduce you to the review process, and how Pull Requests work.
I will request a change be made to one of your 10 nouns for the sole purpose of showing how the review process works.

 1) write out 10 nouns in the space provided below.
    Choose nouns that do things.  
    avoid choosing nouns that have things done TO them.
    If your noun consists of multiple words, use camelCaseToNameIt.

    
 
 2) for each of the 10 nouns, write out 3 actions it might perform, in plain english.
    a) AVOID state-checking actions, like "Car has a horn".  i.e.
        car.hasHorn()
    b) We use 'can' and 'has' to check the state of objects, so they aren't really 'action' verbs.
        "the Car blows its horn" is a better action, because the car is doing something.  its state is not being checked.  i.e.
            car.blowsHorn()
    c) choose actions that your noun does.  Do not write out actions that are performed on your noun.
        for example: 
            noun: lightBulb.
            action: turns on.  
                This is a bad action because someone else turns on the light.  the light doesn't turn itself on. 
            a better action would be: 
                illuminates room
                This is a better action, because this is what lightbulbs do.  
            other actions that would work:
                action: consume electricity
                action: burn out and destroy filament.

        
 3) write out how you'd call that action in pseudo code, in the space after the plain-english action
 
 4) If the action requires multiple words, use camelCaseToNameIt
     don't forget the semi-colon after each statement
 */


//  example)
//  Noun:       arm                     // 1)
//  action 1:   the arm extends         // 2)
arm.extend();                           // 3)
//  action 2:   the arm flexes          // 2)
arm.flex();                             // 3)
//  action 3:   the arm rotates conter-clockwise
arm.rotateCounterClockwise();           // 4) demonstrates camelCase


//  1)
//  Noun:modWheel
//  action 1: increases the pitch of the sound.
modWheel.increasePitch();    
//  action 2: Decreases the pitch of the sound.    
modWheel.decreasePitch();
//  action 3: scrolls through the different modes. 
modWheel.scrollModes();

//  2)
//  Noun:arpeggiator       
//  action 1:plays sequence of notes.
arpeggiator.playSequence();
//  action 2:opens arpeggiator menu
arpeggiator.openMenu();
//  action 3:sets note sequence
arpeggiator.setSequence();

//  3)
//  Noun:key
//  action 1:triggers a note to play
key.triggerNote();
//  action 2:tells a note to stop
key.stopNote();
//  action 3:sets the pitch of a note
key.setPitch();

//  4)
//  Noun:mouse
//  action 1:selects an item
mouse.selectItem();
//  action 2:right clicks an item
mouse.rightClick();
//  action 3:scrolls through items
mouse.scrollItems();

//  5)
//  Noun:knob
//  action 1:sets a value
knob.setValue();
//  action 2:increase value
knob.increaseValue();
//  action 3:decrease value
knob.decreaseValue();

//  6)
//  Noun:eyes
//  action 1:the eyes open    
eyes.open();
//  action 2: the eyes close
eyes.close();
//  action 3: the eyes see
eyes.see();

//  7)
//  Noun:mouth
//  action 1:the mouth speaks
mouth.speak();
//  action 2:the mouth eats
mouth.eat();
//  action 3:the mouth smiles
mouth.smile();

//  8)
//  Noun: bluetoothSpeaker
//  action 1:the speakers play music
speaker.playMusic();
//  action 2:the speaker can adjust volume level
speaker.changeVolume();
//  action 3:the speaker connects to bluetooth
speaker.connectBluetooth();

//  9)
//  Noun: videoCamera
//  action 1:the video camera records video
videoCamera.recordVideo();
//  action 2:the video camera records audio   
videoCamera.recordAudio();
//  action 3:the video camera takes a picture    
videoCamera.takePicture();

//  10) 
//  Noun: computer
//  action 1: the computer emits sounds.    
computer.emitSound();
//  action 2:the computer processes data
computer.processData();
//  action 3:the computer displays data
computer.displayData();



#endif

/*
 MAKE SURE YOU ARE NOT ON THE MASTER BRANCH

 Commit your changes by clicking on the Source Control panel on the left, entering a message, and click [Commit and push].
 
 If you didn't already: 
    Make a pull request after you make your first commit
    pin the pull request link and this repl.it link to our DM thread in a single message.

 send me a DM to review your pull request when the project is ready for review.

 Wait for my code review.
 */

#include <iostream>
int main()
{
    std::cout << "good to go" << std::endl;
    return 0;
}
