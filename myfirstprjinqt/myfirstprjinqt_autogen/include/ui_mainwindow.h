/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menubar;
    QMenu *menuGNU;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        plainTextEdit = new QPlainTextEdit(centralwidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(30, 10, 751, 531));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuGNU = new QMenu(menubar);
        menuGNU->setObjectName(QString::fromUtf8("menuGNU"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuGNU->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("MainWindow", "                                                               -----------GNU PHILOSOPHY--------------\n"
" During the preparation of this speech, I have read several documents and spoken to a lot of people. In doing so, I realized that even people whose jobs have been created more or less directly by the GNU Project did not know its true meaning. In the overall rush we are experiencing at the moment, it seems that a basic awareness of the roots has been lost. Tonight I hope I'll be able to uncover some of those roots again.\n"
"\n"
"The origin lies somewhere in the transition from the 70's to the 80's, when the software industry became what we accept so willingly today. In the initial competition, some firms took to hoarding code as a survival strategy. While attempting to support this behavior's legality, they created phrases like \342\200\234software piracy\342\200\235 because they suggest that something is lost when software is copied. People were forced to yield to licenses that bound them, to make sure t"
                        "hat no one else had access to these programs.\n"
"\n"
"When a friend asked you whether he could copy a program from you, you immediately faced a dilemma. There are no disadvantages for you in copying the program, and it doesn't deteriorate during the copying process. It would be more restrictive if he asked you to pass the salt, since you can't both use it at the same time. The politics of the companies forced you to choose between legality and friendship.\n"
"\n"
"A lot of people were upset about this, and most of them copied the program anyway\342\200\224very often using lame excuses that were mostly aimed at calming their own troubled consciousness (induced by the firms' choice of words). The absolute hit was probably \342\200\234If I would use it more often I would pay it,\342\200\235 a phrase that probably everyone caught himself using if he ever had to rely on proprietary software.\n"
"\n"
"One man found this situation unbearable. Used to the early days, the (as he says himself) \342\200\234paradise,\342"
                        "\200\235 where freedom and responsible use of the possibilities determined the situation, Richard Stallman envisioned the concept of a completely free system. Very quickly it became clear that this system would be Unix-compatible and it was baptized\342\200\224recursive acronyms were very popular back then\342\200\224GNU, which means \342\200\234GNU's Not Unix.\342\200\235 Stallman gathered some people who shared his fascination with a free system, and founded the GNU Free Software Foundation, of which he is still the president today.\n"
"\n"
"Since first of all a Unix system requires a large set of components, it became clear that these were the first step towards a completely free system. The GNU FSF worked on implementing them, and by the beginning of the 90's the GNU system was complete (with the exception of the kernel). The GNU kernel\342\200\224project name \342\200\234Hurd\342\200\235\342\200\224has an extremely ambitious layout that proved to be very slow and clumsy in development. Fortunately, at thi"
                        "s point Linus Torvalds' first Linux kernel was in the test phase, and when he saw the work already done by the GNU FSF, he put his kernel under the GNU GPL and made it the kernel of the GNU system.\n"
"\n"
"There is no need to tell the rest of the story since most of us have experienced it themselves.\n"
"\n"
"A little earlier I said that Richard Stallman envisioned the concept of free software. What I didn't tell you about was the philosophy that stands behind it.\n"
"\n"
"The word \342\200\234free\342\200\235 in \342\200\234free software\342\200\235 does not refer to price, but to freedom. This is no unproblematic topic, and recently some of the visionaries of the movement (like Eric Raymond) have begun to talk about \342\200\234open source\342\200\235 because \342\200\234freedom\342\200\235 has an uneasy sound to it for most people. Freedom rings of \342\200\234making world a better place,\342\200\235 and insecurity. It rings of change, and change frightens many people. To numb this fear, other licenses for"
                        " free software have been invented in order to make the concept digestible for more people and to avoid scaring the industry.\n"
"\n"
"That is the reason why the GNU Project dislikes the term \342\200\234open source.\342\200\235 We think it makes more sense to take away people's fears of the idea instead of blurring the concept. Only if users and firms are aware of the importance of freedom can we avoid falling back into old patterns.\n"
"\n"
"The philosophy of the GNU Project says that everyone shall have the granted right to use a program, to copy it, and to change it to make it fit his or her needs. The only restriction the GNU General Public License makes, is that NO ONE has the right to take away this freedom from anyone else.\n"
"\n"
"When an author puts his code under the GNU GPL, the freedom is an inseparable part of his program. Of course, this is a thorn in the side of a lot of business'es eyes because it stops them from taking the code, modifying it, and then selling it as a proprietary program. As l"
                        "ong as there are people who try to live the dream of instant wealth, it is this freedom that stops firms like Microsoft from corrupting the future development of our system.\n"
"\n"
"The most used argument against the GNU philosophy is probably that software is the \342\200\234intellectual property\342\200\235 of the programmer, and it is only right if he can decide the price for which the program is distributed. This argument is easy to understand for everyone, since it is exactly what we have been told to believe during the last 20 years.\n"
"\n"
"Reality is a little different, though. Private programmers who can live off selling self-written software are the exception. Usually they give their rights to the firm they work at, and this firm earns the money by restricting access to that program. Effectively, the firm has the rights for that program and decides it's price, not the programmer.\n"
"\n"
"A lawyer who invents an especially brilliant strategy has no right to claim it as his \342\200\234intellectual "
                        "property.\342\200\235 The method is freely available to anyone. Why do we so willingly accept the concept that every line of code\342\200\224no matter how poorly written or uninspired it may be\342\200\224is so unique and incredibly personal? The zeal for control has taken over in a way that even human genes are subject to patents\342\200\246 although usually not by the people who \342\200\234use\342\200\235 them. Should really everything be allowed to be patented and licensed?\n"
"\n"
"This is the question that is one of the core thoughts of the GNU Project. Let us just imagine there would be no such concept as patented software, or patenting software would be unusual because everyone published his programs under the GNU GPL.\n"
"\n"
"Solutions for standard problems that had to be solved over and over again can be accessed easily. No one has to waste his time ever again to work on the same problem dozens of times\342\200\224programmers could search for new ways and approach new problems. If a group of users n"
                        "eeds a certain feature in a program, they just hire a programmer and let him implement it. Freed of the limitations of licenses and money, only two criteria would determine the development of programs: demand and quality.\n"
"\n"
"Speaking of quality\342\200\224nowadays more and more firms realize that allowing the users to access the source code gives them a huge advantage. To say it in a simple way: more eyes can see more. Solutions that are unimaginable for one person are painfully obvious for someone else. Due to this advantage, free software is very often so much better than its proprietary counterpart. The train of thought that now appears to be establishing itself within some firms is to give users access to the source code but not grant any other rights. Improvements are obediently being sent back to the firm, which advances its product with them. Basically a gigantic gratis development division. If we do not pay attention to these things now, it might happen that in 5 years we will have to pay for a v"
                        "ersion that has been produced by applying our own patch.\n"
"\n"
"The concept of software as \342\200\234intellectual property\342\200\235 carries the seed of doom inside itself (please forgive me for the pathos here). As long as we accept this concept, we accept the danger that another firm will attempt to take control. Microsoft is not evil incarnated, as some people seem to perceive. Microsoft is the natural consequence of the widely accepted system.\n"
"\n"
"The fear of sawing the branch you're sitting on is also commonly spread, but completely irrational. Better programs lead to more users that have other needs and new ideas, creating more demand. The structure will change to fit the new situation but work will increase rather than decrease, and it will become less routine, hence more interesting.\n"
"\n"
"The last common fear that remains is the fear over lack of recognition. Well, the respect held for the frontmen of the different philosophies speaks for itself. I on my part would prefer to be as respec"
                        "ted as Linus Torvalds or Richard Stallman than to have the reputation of Bill Gates.\n"
"\n"
"Admittedly, this does sound like bettering the world and idealism, but a lot of the really great ideas were driven by the wish to make the world a little better.\n"
"\n"
"And to settle one point very clearly: no, the GNU Project is not against capitalism or firms in general, and it is not against software firms in particular. We do not want to diminish the potential for profit, quite the contrary. Every firm is being told to make as much money as they can off the sale of software, documentation and service\342\200\224as long as they stick to the basic principles of Free Software. The more these firms earn, the more they can invest into the development of new software. We do not want to destroy the market, we just want to fit it to the times.\n"
"\n"
"One short note about the basic principles: of course free software also requires free documentation. It doesn't make any sense to free the successor of the book\342\200\224"
                        "software\342\200\224while accepting control of the direct digital equivalent. Free documentation is as important as free software itself.\n"
"\n"
"Maybe someone discarded my statement about seeking to \342\200\234fit the market to the times\342\200\235 as a rhetorical statement, but it is an important point in the GNU Philosophy: the time when software was only relevant for a few freaks and some firms is long gone. Nowadays, software is the pathway to information. A system that blocks the pathways to information, and in doing so the access to information itself, must be reconsidered.\n"
"\n"
"When Eric Raymond published the so called \342\200\234Halloween Document,\342\200\235 it triggered emotions from euphoria to paranoia. For those of you who did not read it: it is a Microsoft internal study in which the strengths and weaknesses of free software in general, and Linux in particular, are analyzed. The author basically concluded that Microsoft has two possibilities to counter the threat.\n"
"\n"
"The first is "
                        "the creation of new or modification of old protocols, documenting them only poorly or not at all, so that only Windows-based machines will have a working implementation.\n"
"\n"
"One example of this tactic is the protocol used by HP \342\200\234Cxi\342\200\235 printers, which have entered the market as extremely cheap \342\200\234Windows-Printers.\342\200\235 The specifications have only been given to Microsoft, so these printers are not usable by any other system.\n"
"\n"
"I have been told by a \342\200\234professionally trained\342\200\235 computer salesperson that the \342\200\234for Windows\342\200\235 sticker means the printer needs a very special kind of RAM, which only Windows machines have; this is why it cannot be used under Linux. Something like this confuses the typical user, which brings me directly to the second described tactic.\n"
"\n"
"These tactics are usually gathered under the acronym \342\200\234FUD\342\200\235 (Fear Uncertainty Doubt), and were used by IBM long before Microsoft uncovered t"
                        "hem. The idea is clear: if you make someone uncertain enough, he or she will not dare make any decision, effectively remaining in his or her current position. That is the thought.\n"
"\n"
"For all times, education has been the arch-enemy of superstition. We must not allow education to be hindered by allowing ourselves to become split.\n"
"\n"
"The most recognizable split in the recent history has been the already noted distinction between \342\200\234open source\342\200\235 and \342\200\234free software.\342\200\235 Telling both concepts apart is not an easy task, even for most insiders, and it is only understandable if viewed in a historical context. Since this is a central point, I'd like to say a few words about it.\n"
"\n"
"With the completion of the GNU system with the Linux kernel, there was suddenly a complete, powerful, free system available. This inevitably had to raise the public's attention sooner or later.\n"
"\n"
"When this attention came, a lot of firms were disconcerted by the word \342\200\234f"
                        "ree.\342\200\235 The first association was \342\200\234no money,\342\200\235 which immediately meant \342\200\234no profit\342\200\235 for them. When people then tried to tell them that \342\200\234free\342\200\235 truly stands for \342\200\234freedom,\342\200\235 they were completely shaken.\n"
"\n"
"Infected by this insecurity and doubt, the idea arose to avoid words like \342\200\234free\342\200\235 and \342\200\234freedom\342\200\235 at all costs. The term \342\200\234open source\342\200\235 was born.\n"
"\n"
"Admittedly it is easier to sell the idea if you use the term \342\200\234open source\342\200\235 instead of \342\200\234free software.\342\200\235 But the consequence is that the \342\200\234newbies\342\200\235 have no knowledge or understanding of the original idea. This splits the movement, and leads to incredibly unproductive trench wars, which waste a huge amount of creative energy.\n"
"\n"
"A larger interested audience does not mean we should talk less about the underlying philosophy. Quite the "
                        "contrary: the more people and firms do not understand that this freedom is also in their interest, the more we need to talk about it. The freedom of software offers a huge potential for all of us\342\200\224firms and users.\n"
"\n"
"The plan is not to remove capitalism or destroy firms. We want to change the understanding of software for the benefit of all participants, to fit the needs of the 21th century. This is the core of the GNU Project.\n"
"\n"
"Each of us can do his share\342\200\224be it in form of a program or documentation, or just by spreading the word that there is another way of handling things.\n"
"\n"
"It is crucial to explain to the firms that free software is not a threat, but an opportunity. Of course this doesn't happen overnight, but when all participants realize the possibilities and perspectives, all of us will win. So, if you are working in the software business, make yourself at home with the topic, talk about it with friends and colleagues. And please refrain from trying to \342\200\234"
                        "missionize\342\200\235 them\342\200\224I know most of us have this tendency\342\200\224the arguments speak for themselves. Give them the time and peace to think it over, and to befriend themselves with the concept. Show them that the concept of freedom is nothing to be feared.\n"
"\n"
"I hope I was able to convey the philosophy or at least stimulate consideration of some new ideas. If you have questions or would like to discuss some things, I'll be here all night and all questions are welcome. I wish everyone a very interesting night. Thank you.", nullptr));
        menuGNU->setTitle(QCoreApplication::translate("MainWindow", "GNU", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
